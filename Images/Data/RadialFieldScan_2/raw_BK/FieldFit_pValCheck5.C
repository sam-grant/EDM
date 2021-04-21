void FieldFit_pValCheck5()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 01:22:32 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-50,-40.9399,70,56.91001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[5] = {
   50,
   30,
   10,
   -10,
   -30};
   Double_t Graph0_fy1041[5] = {
   39.1181,
   20.96023,
   9.013131,
   -6.128556,
   -23.37896};
   Double_t Graph0_fex1041[5] = {
   6.953119e-310,
   0,
   0,
   6.953119e-310,
   6.953119e-310};
   Double_t Graph0_fey1041[5] = {
   1.483591,
   1.222034,
   1.413793,
   1.245862,
   1.252617};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","",100,-38,58);
   Graph_Graph01041->SetMinimum(-31.15491);
   Graph_Graph01041->SetMaximum(47.12502);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   
   TF1 *mainFit1042 = new TF1("mainFit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   mainFit1042->SetFillColor(19);
   mainFit1042->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1042->SetLineColor(ci);
   mainFit1042->SetLineWidth(2);
   mainFit1042->SetChisquare(5.310424);
   mainFit1042->SetNDF(3);
   mainFit1042->GetXaxis()->SetLabelFont(42);
   mainFit1042->GetXaxis()->SetTitleOffset(1);
   mainFit1042->GetXaxis()->SetTitleFont(42);
   mainFit1042->GetYaxis()->SetLabelFont(42);
   mainFit1042->GetYaxis()->SetTitleFont(42);
   mainFit1042->SetParameter(0,0.2178461);
   mainFit1042->SetParError(0,0.6083668);
   mainFit1042->SetParLimits(0,0,0);
   mainFit1042->SetParameter(1,0.7568078);
   mainFit1042->SetParError(1,0.02105269);
   mainFit1042->SetParLimits(1,0,0);
   mainFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1042);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.77");
   pt_LaTex = pt->AddText("0.757#pm0.0211");
   pt_LaTex = pt->AddText("0.218#pm0.608");
   pt_LaTex = pt->AddText("0.288#pm0.806");
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
   TLine *line = new TLine(-38,0,-0.2878486,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.2878486,-31.15491,-0.2878486,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1043 = new TF1("mainFit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   mainFit1043->SetFillColor(19);
   mainFit1043->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1043->SetLineColor(ci);
   mainFit1043->SetLineWidth(2);
   mainFit1043->SetChisquare(5.310424);
   mainFit1043->SetNDF(3);
   mainFit1043->GetXaxis()->SetLabelFont(42);
   mainFit1043->GetXaxis()->SetTitleOffset(1);
   mainFit1043->GetXaxis()->SetTitleFont(42);
   mainFit1043->GetYaxis()->SetLabelFont(42);
   mainFit1043->GetYaxis()->SetTitleFont(42);
   mainFit1043->SetParameter(0,0.2178461);
   mainFit1043->SetParError(0,0.6083668);
   mainFit1043->SetParLimits(0,0,0);
   mainFit1043->SetParameter(1,0.7568078);
   mainFit1043->SetParError(1,0.02105269);
   mainFit1043->SetParLimits(1,0,0);
   mainFit1043->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
