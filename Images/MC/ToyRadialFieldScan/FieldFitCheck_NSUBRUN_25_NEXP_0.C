void FieldFitCheck_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-39.91859,45,55.88926);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[2] = {
   -30,
   30};
   Double_t Graph0_fy1007[2] = {
   -21.74574,
   37.71641};
   Double_t Graph0_fex1007[2] = {
   0,
   0};
   Double_t Graph0_fey1007[2] = {
   2.204873,
   2.204873};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("25 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","25 sub-runs",100,-36,36);
   Graph_Graph01007->SetMinimum(-30.3378);
   Graph_Graph01007->SetMaximum(46.30847);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01007->SetLineColor(ci);
   Graph_Graph01007->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01007->GetXaxis()->CenterTitle(true);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01007->GetYaxis()->CenterTitle(true);
   Graph_Graph01007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   
   TF1 *checkFit1008 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1008->SetFillColor(19);
   checkFit1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1008->SetLineColor(ci);
   checkFit1008->SetLineWidth(2);
   checkFit1008->SetChisquare(6.327286e-16);
   checkFit1008->SetNDF(0);
   checkFit1008->GetXaxis()->SetLabelFont(42);
   checkFit1008->GetXaxis()->SetTitleOffset(1);
   checkFit1008->GetXaxis()->SetTitleFont(42);
   checkFit1008->GetYaxis()->SetLabelFont(42);
   checkFit1008->GetYaxis()->SetTitleFont(42);
   checkFit1008->SetParameter(0,7.985335);
   checkFit1008->SetParError(0,1.55908);
   checkFit1008->SetParLimits(0,0,0);
   checkFit1008->SetParameter(1,0.9910358);
   checkFit1008->SetParError(1,0.05196935);
   checkFit1008->SetParLimits(1,0,0);
   checkFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1008);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.991#pm0.052");
   pt_LaTex = pt->AddText(" 7.99#pm 1.56");
   pt_LaTex = pt->AddText(" 8.06#pm 1.63");
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
   TLine *line = new TLine(-36,0,-8.057564,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.057564,-30.3378,-8.057564,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1009 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1009->SetFillColor(19);
   checkFit1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1009->SetLineColor(ci);
   checkFit1009->SetLineWidth(2);
   checkFit1009->SetChisquare(6.327286e-16);
   checkFit1009->SetNDF(0);
   checkFit1009->GetXaxis()->SetLabelFont(42);
   checkFit1009->GetXaxis()->SetTitleOffset(1);
   checkFit1009->GetXaxis()->SetTitleFont(42);
   checkFit1009->GetYaxis()->SetLabelFont(42);
   checkFit1009->GetYaxis()->SetTitleFont(42);
   checkFit1009->SetParameter(0,7.985335);
   checkFit1009->SetParError(0,1.55908);
   checkFit1009->SetParLimits(0,0,0);
   checkFit1009->SetParameter(1,0.9910358);
   checkFit1009->SetParError(1,0.05196935);
   checkFit1009->SetParLimits(1,0,0);
   checkFit1009->Draw("same");
   
   pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("25 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
