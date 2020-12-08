void FieldFitCheck_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:05 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-37.32294,45,53.46209);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1107[4] = {
   -21.46379,
   -3.446222,
   18.18802,
   37.60294};
   Double_t Graph0_fex1107[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1107[4] = {
   0.7283052,
   0.7283052,
   0.7283052,
   0.7283052};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","225 sub-runs",100,-36,36);
   Graph_Graph01107->SetMinimum(-28.24443);
   Graph_Graph01107->SetMaximum(44.38358);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
   
   TF1 *checkFit1108 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1108->SetFillColor(19);
   checkFit1108->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1108->SetLineColor(ci);
   checkFit1108->SetLineWidth(2);
   checkFit1108->SetChisquare(4.130796);
   checkFit1108->SetNDF(2);
   checkFit1108->GetXaxis()->SetLabelFont(42);
   checkFit1108->GetXaxis()->SetTitleOffset(1);
   checkFit1108->GetXaxis()->SetTitleFont(42);
   checkFit1108->GetYaxis()->SetLabelFont(42);
   checkFit1108->GetYaxis()->SetTitleFont(42);
   checkFit1108->SetParameter(0,7.720239);
   checkFit1108->SetParError(0,0.3641526);
   checkFit1108->SetParLimits(0,0,0);
   checkFit1108->SetParameter(1,0.9941723);
   checkFit1108->SetParError(1,0.0162854);
   checkFit1108->SetParLimits(1,0,0);
   checkFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1108);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.07");
   pt_LaTex = pt->AddText("0.994#pm0.0163");
   pt_LaTex = pt->AddText(" 7.72#pm0.364");
   pt_LaTex = pt->AddText(" 7.77#pm0.388");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-7.765494,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.765494,-28.24443,-7.765494,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1109 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1109->SetFillColor(19);
   checkFit1109->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1109->SetLineColor(ci);
   checkFit1109->SetLineWidth(2);
   checkFit1109->SetChisquare(4.130796);
   checkFit1109->SetNDF(2);
   checkFit1109->GetXaxis()->SetLabelFont(42);
   checkFit1109->GetXaxis()->SetTitleOffset(1);
   checkFit1109->GetXaxis()->SetTitleFont(42);
   checkFit1109->GetYaxis()->SetLabelFont(42);
   checkFit1109->GetYaxis()->SetTitleFont(42);
   checkFit1109->SetParameter(0,7.720239);
   checkFit1109->SetParError(0,0.3641526);
   checkFit1109->SetParLimits(0,0,0);
   checkFit1109->SetParameter(1,0.9941723);
   checkFit1109->SetParError(1,0.0162854);
   checkFit1109->SetParLimits(1,0,0);
   checkFit1109->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("225 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
