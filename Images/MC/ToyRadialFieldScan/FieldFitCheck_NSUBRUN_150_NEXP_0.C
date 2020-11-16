void FieldFitCheck_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 15:14:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.16075,75,84.04462);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1095[6] = {
   -42.1312,
   -22.21203,
   -1.873301,
   17.51415,
   37.5444,
   58.01507};
   Double_t Graph0_fex1095[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1095[6] = {
   0.6619862,
   0.6619862,
   0.6619862,
   0.6619862,
   0.6619862,
   0.6619862};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","150 sub-runs",100,-60,60);
   Graph_Graph01095->SetMinimum(-52.94021);
   Graph_Graph01095->SetMaximum(68.82408);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
   
   TF1 *checkFit1096 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1096->SetFillColor(19);
   checkFit1096->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1096->SetLineColor(ci);
   checkFit1096->SetLineWidth(2);
   checkFit1096->SetChisquare(0.6823244);
   checkFit1096->SetNDF(4);
   checkFit1096->GetXaxis()->SetLabelFont(42);
   checkFit1096->GetXaxis()->SetTitleOffset(1);
   checkFit1096->GetXaxis()->SetTitleFont(42);
   checkFit1096->GetYaxis()->SetLabelFont(42);
   checkFit1096->GetYaxis()->SetTitleFont(42);
   checkFit1096->SetParameter(0,7.809515);
   checkFit1096->SetParError(0,0.2702548);
   checkFit1096->SetParLimits(0,0,0);
   checkFit1096->SetParameter(1,0.9991259);
   checkFit1096->SetParError(1,0.007912249);
   checkFit1096->SetParLimits(1,0,0);
   checkFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1096);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.171");
   pt_LaTex = pt->AddText("0.999#pm0.00791");
   pt_LaTex = pt->AddText(" 7.81#pm 0.27");
   pt_LaTex = pt->AddText(" 7.82#pm0.277");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-7.816347,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.816347,-52.94021,-7.816347,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1097 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1097->SetFillColor(19);
   checkFit1097->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1097->SetLineColor(ci);
   checkFit1097->SetLineWidth(2);
   checkFit1097->SetChisquare(0.6823244);
   checkFit1097->SetNDF(4);
   checkFit1097->GetXaxis()->SetLabelFont(42);
   checkFit1097->GetXaxis()->SetTitleOffset(1);
   checkFit1097->GetXaxis()->SetTitleFont(42);
   checkFit1097->GetYaxis()->SetLabelFont(42);
   checkFit1097->GetYaxis()->SetTitleFont(42);
   checkFit1097->SetParameter(0,7.809515);
   checkFit1097->SetParError(0,0.2702548);
   checkFit1097->SetParLimits(0,0,0);
   checkFit1097->SetParameter(1,0.9991259);
   checkFit1097->SetParError(1,0.007912249);
   checkFit1097->SetParLimits(1,0,0);
   checkFit1097->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("150 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
