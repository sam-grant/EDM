void FieldFit_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-47.63373,45,66.405);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1141[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1141[4] = {
   -27.86991,
   -2.190829,
   22.8264,
   46.64121};
   Double_t Graph0_fex1141[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1141[4] = {
   0.7573611,
   0.7573657,
   0.7572936,
   0.757338};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1141,Graph0_fy1141,Graph0_fex1141,Graph0_fey1141);
   gre->SetName("Graph0");
   gre->SetTitle("300 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01141 = new TH1F("Graph_Graph01141","300 sub-runs",100,-36,36);
   Graph_Graph01141->SetMinimum(-36.22986);
   Graph_Graph01141->SetMaximum(55.00113);
   Graph_Graph01141->SetDirectory(0);
   Graph_Graph01141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01141->SetLineColor(ci);
   Graph_Graph01141->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01141->GetXaxis()->CenterTitle(true);
   Graph_Graph01141->GetXaxis()->SetLabelFont(42);
   Graph_Graph01141->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01141->GetXaxis()->SetTitleFont(42);
   Graph_Graph01141->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01141->GetYaxis()->CenterTitle(true);
   Graph_Graph01141->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01141->GetYaxis()->SetLabelFont(42);
   Graph_Graph01141->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01141->GetYaxis()->SetTitleFont(42);
   Graph_Graph01141->GetZaxis()->SetLabelFont(42);
   Graph_Graph01141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01141);
   
   
   TF1 *mainFit1142 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1142->SetFillColor(19);
   mainFit1142->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1142->SetLineColor(ci);
   mainFit1142->SetLineWidth(2);
   mainFit1142->SetChisquare(1.540381);
   mainFit1142->SetNDF(2);
   mainFit1142->GetXaxis()->SetLabelFont(42);
   mainFit1142->GetXaxis()->SetTitleOffset(1);
   mainFit1142->GetXaxis()->SetTitleFont(42);
   mainFit1142->GetYaxis()->SetLabelFont(42);
   mainFit1142->GetYaxis()->SetTitleFont(42);
   mainFit1142->SetParameter(0,9.851731);
   mainFit1142->SetParError(0,0.3786698);
   mainFit1142->SetParLimits(0,0,0);
   mainFit1142->SetParameter(1,1.242753);
   mainFit1142->SetParError(1,0.01693481);
   mainFit1142->SetParLimits(1,0,0);
   mainFit1142->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1142);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.77");
   pt_LaTex = pt->AddText(" 1.24#pm0.0169");
   pt_LaTex = pt->AddText(" 9.85#pm0.379");
   pt_LaTex = pt->AddText(" 7.93#pm0.323");
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
   TLine *line = new TLine(-36,0,-7.927344,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.927344,-36.22986,-7.927344,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1143 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1143->SetFillColor(19);
   mainFit1143->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1143->SetLineColor(ci);
   mainFit1143->SetLineWidth(2);
   mainFit1143->SetChisquare(1.540381);
   mainFit1143->SetNDF(2);
   mainFit1143->GetXaxis()->SetLabelFont(42);
   mainFit1143->GetXaxis()->SetTitleOffset(1);
   mainFit1143->GetXaxis()->SetTitleFont(42);
   mainFit1143->GetYaxis()->SetLabelFont(42);
   mainFit1143->GetYaxis()->SetTitleFont(42);
   mainFit1143->SetParameter(0,9.851731);
   mainFit1143->SetParError(0,0.3786698);
   mainFit1143->SetParLimits(0,0,0);
   mainFit1143->SetParameter(1,1.242753);
   mainFit1143->SetParError(1,0.01693481);
   mainFit1143->SetParLimits(1,0,0);
   mainFit1143->Draw("same");
   
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
