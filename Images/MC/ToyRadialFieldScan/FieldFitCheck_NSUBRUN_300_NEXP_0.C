void FieldFitCheck_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 16 20:33:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.98482,75,84.24598);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1191[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1191[6] = {
   -42.14627,
   -22.04543,
   -1.497428,
   18.74491,
   37.6412,
   58.40744};
   Double_t Graph0_fex1191[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1191[6] = {
   0.4667463,
   0.4667463,
   0.4667463,
   0.4667463,
   0.4667463,
   0.4667463};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1191,Graph0_fy1191,Graph0_fex1191,Graph0_fey1191);
   gre->SetName("Graph0");
   gre->SetTitle("300 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01191 = new TH1F("Graph_Graph01191","300 sub-runs",100,-60,60);
   Graph_Graph01191->SetMinimum(-52.76174);
   Graph_Graph01191->SetMaximum(69.0229);
   Graph_Graph01191->SetDirectory(0);
   Graph_Graph01191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01191->SetLineColor(ci);
   Graph_Graph01191->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01191->GetXaxis()->CenterTitle(true);
   Graph_Graph01191->GetXaxis()->SetLabelFont(42);
   Graph_Graph01191->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01191->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01191->GetXaxis()->SetTitleFont(42);
   Graph_Graph01191->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01191->GetYaxis()->CenterTitle(true);
   Graph_Graph01191->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01191->GetYaxis()->SetLabelFont(42);
   Graph_Graph01191->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01191->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01191->GetYaxis()->SetTitleFont(42);
   Graph_Graph01191->GetZaxis()->SetLabelFont(42);
   Graph_Graph01191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01191);
   
   
   TF1 *checkFit1192 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1192->SetFillColor(19);
   checkFit1192->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1192->SetLineColor(ci);
   checkFit1192->SetLineWidth(2);
   checkFit1192->SetChisquare(3.952793);
   checkFit1192->SetNDF(4);
   checkFit1192->GetXaxis()->SetLabelFont(42);
   checkFit1192->GetXaxis()->SetTitleOffset(1);
   checkFit1192->GetXaxis()->SetTitleFont(42);
   checkFit1192->GetYaxis()->SetLabelFont(42);
   checkFit1192->GetYaxis()->SetTitleFont(42);
   checkFit1192->SetParameter(0,8.184068);
   checkFit1192->SetParError(0,0.1905484);
   checkFit1192->SetParLimits(0,0,0);
   checkFit1192->SetParameter(1,1.002958);
   checkFit1192->SetParError(1,0.005578685);
   checkFit1192->SetParLimits(1,0,0);
   checkFit1192->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1192);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.988");
   pt_LaTex = pt->AddText("    1#pm0.00558");
   pt_LaTex = pt->AddText(" 8.18#pm0.191");
   pt_LaTex = pt->AddText(" 8.16#pm0.195");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.159929,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.159929,-52.76174,-8.159929,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1193 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1193->SetFillColor(19);
   checkFit1193->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1193->SetLineColor(ci);
   checkFit1193->SetLineWidth(2);
   checkFit1193->SetChisquare(3.952793);
   checkFit1193->SetNDF(4);
   checkFit1193->GetXaxis()->SetLabelFont(42);
   checkFit1193->GetXaxis()->SetTitleOffset(1);
   checkFit1193->GetXaxis()->SetTitleFont(42);
   checkFit1193->GetYaxis()->SetLabelFont(42);
   checkFit1193->GetYaxis()->SetTitleFont(42);
   checkFit1193->SetParameter(0,8.184068);
   checkFit1193->SetParError(0,0.1905484);
   checkFit1193->SetParLimits(0,0,0);
   checkFit1193->SetParameter(1,1.002958);
   checkFit1193->SetParError(1,0.005578685);
   checkFit1193->SetParLimits(1,0,0);
   checkFit1193->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("300 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
