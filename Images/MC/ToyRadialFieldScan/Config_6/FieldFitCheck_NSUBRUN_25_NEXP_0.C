void FieldFitCheck_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-66.49956,75,86.9737);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[11] = {
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
   Double_t Graph0_fy1025[11] = {
   -38.17699,
   -32.56853,
   -25.40143,
   -11.67306,
   -3.034319,
   11.99443,
   17.52036,
   29.44477,
   37.49998,
   45.72677,
   58.65113};
   Double_t Graph0_fex1025[11] = {
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
   Double_t Graph0_fey1025[11] = {
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692,
   2.743692};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","Sub-runs 25",100,-60,60);
   Graph_Graph01025->SetMinimum(-51.15224);
   Graph_Graph01025->SetMaximum(71.62637);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
   
   TF1 *checkFit1026 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1026->SetFillColor(19);
   checkFit1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1026->SetLineColor(ci);
   checkFit1026->SetLineWidth(2);
   checkFit1026->SetChisquare(6.682511);
   checkFit1026->SetNDF(9);
   checkFit1026->GetXaxis()->SetLabelFont(42);
   checkFit1026->GetXaxis()->SetTitleOffset(1);
   checkFit1026->GetXaxis()->SetTitleFont(42);
   checkFit1026->GetYaxis()->SetLabelFont(42);
   checkFit1026->GetYaxis()->SetTitleFont(42);
   checkFit1026->SetParameter(0,8.180282);
   checkFit1026->SetParError(0,0.8272543);
   checkFit1026->SetParLimits(0,0,0);
   checkFit1026->SetParameter(1,0.989833);
   checkFit1026->SetParError(1,0.02616008);
   checkFit1026->SetParLimits(1,0,0);
   checkFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1026);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.743");
   pt_LaTex = pt->AddText(" 0.99#pm0.0262");
   pt_LaTex = pt->AddText(" 8.18#pm0.827");
   pt_LaTex = pt->AddText("#minus8.26#pm0.864");
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
   TLine *line = new TLine(-60,0,-8.264305,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.264305,-51.15224,-8.264305,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1027 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1027->SetFillColor(19);
   checkFit1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1027->SetLineColor(ci);
   checkFit1027->SetLineWidth(2);
   checkFit1027->SetChisquare(6.682511);
   checkFit1027->SetNDF(9);
   checkFit1027->GetXaxis()->SetLabelFont(42);
   checkFit1027->GetXaxis()->SetTitleOffset(1);
   checkFit1027->GetXaxis()->SetTitleFont(42);
   checkFit1027->GetYaxis()->SetLabelFont(42);
   checkFit1027->GetYaxis()->SetTitleFont(42);
   checkFit1027->SetParameter(0,8.180282);
   checkFit1027->SetParError(0,0.8272543);
   checkFit1027->SetParLimits(0,0,0);
   checkFit1027->SetParameter(1,0.989833);
   checkFit1027->SetParError(1,0.02616008);
   checkFit1027->SetParLimits(1,0,0);
   checkFit1027->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 25");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
