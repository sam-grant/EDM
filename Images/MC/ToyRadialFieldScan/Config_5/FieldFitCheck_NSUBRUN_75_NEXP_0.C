void FieldFitCheck_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-64.0897,75,86.53476);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1077[11] = {
   -36.45167,
   -33.03858,
   -18.03557,
   -13.28122,
   -5.074897,
   5.391455,
   17.04448,
   30.81113,
   41.32853,
   50.74261,
   58.89673};
   Double_t Graph0_fex1077[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1077[11] = {
   2.533949,
   2.533949,
   2.533949,
   2.533949,
   2.533949,
   2.533949,
   2.533949,
   2.533949,
   2.533949,
   2.533949,
   2.533949};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 75");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","Sub-runs 75",100,-60,60);
   Graph_Graph01077->SetMinimum(-49.02725);
   Graph_Graph01077->SetMaximum(71.47231);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
   
   TF1 *checkFit1078 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1078->SetFillColor(19);
   checkFit1078->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1078->SetLineColor(ci);
   checkFit1078->SetLineWidth(2);
   checkFit1078->SetChisquare(13.08133);
   checkFit1078->SetNDF(9);
   checkFit1078->GetXaxis()->SetLabelFont(42);
   checkFit1078->GetXaxis()->SetTitleOffset(1);
   checkFit1078->GetXaxis()->SetTitleFont(42);
   checkFit1078->GetYaxis()->SetLabelFont(42);
   checkFit1078->GetYaxis()->SetTitleFont(42);
   checkFit1078->SetParameter(0,8.939362);
   checkFit1078->SetParError(0,0.7640144);
   checkFit1078->SetParLimits(0,0,0);
   checkFit1078->SetParameter(1,1.000239);
   checkFit1078->SetParError(1,0.02416026);
   checkFit1078->SetParLimits(1,0,0);
   checkFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1078);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.45");
   pt_LaTex = pt->AddText("    1#pm0.0242");
   pt_LaTex = pt->AddText(" 8.94#pm0.764");
   pt_LaTex = pt->AddText("#minus8.94#pm0.794");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.937224,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.937224,-49.02725,-8.937224,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1079 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1079->SetFillColor(19);
   checkFit1079->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1079->SetLineColor(ci);
   checkFit1079->SetLineWidth(2);
   checkFit1079->SetChisquare(13.08133);
   checkFit1079->SetNDF(9);
   checkFit1079->GetXaxis()->SetLabelFont(42);
   checkFit1079->GetXaxis()->SetTitleOffset(1);
   checkFit1079->GetXaxis()->SetTitleFont(42);
   checkFit1079->GetYaxis()->SetLabelFont(42);
   checkFit1079->GetYaxis()->SetTitleFont(42);
   checkFit1079->SetParameter(0,8.939362);
   checkFit1079->SetParError(0,0.7640144);
   checkFit1079->SetParLimits(0,0,0);
   checkFit1079->SetParameter(1,1.000239);
   checkFit1079->SetParError(1,0.02416026);
   checkFit1079->SetParLimits(1,0,0);
   checkFit1079->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 75");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
