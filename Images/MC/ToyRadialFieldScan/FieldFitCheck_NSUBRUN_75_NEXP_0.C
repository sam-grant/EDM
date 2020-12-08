void FieldFitCheck_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-40.86033,45,54.08257);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1035[4] = {
   -23.7741,
   -4.053348,
   18.55058,
   36.99634};
   Double_t Graph0_fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1035[4] = {
   1.262413,
   1.262413,
   1.262413,
   1.262413};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("75 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","75 sub-runs",100,-36,36);
   Graph_Graph01035->SetMinimum(-31.36604);
   Graph_Graph01035->SetMaximum(44.58828);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   
   TF1 *checkFit1036 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1036->SetFillColor(19);
   checkFit1036->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1036->SetLineColor(ci);
   checkFit1036->SetLineWidth(2);
   checkFit1036->SetChisquare(1.810538);
   checkFit1036->SetNDF(2);
   checkFit1036->GetXaxis()->SetLabelFont(42);
   checkFit1036->GetXaxis()->SetTitleOffset(1);
   checkFit1036->GetXaxis()->SetTitleFont(42);
   checkFit1036->GetYaxis()->SetLabelFont(42);
   checkFit1036->GetYaxis()->SetTitleFont(42);
   checkFit1036->SetParameter(0,6.929868);
   checkFit1036->SetParError(0,0.6312066);
   checkFit1036->SetParLimits(0,0,0);
   checkFit1036->SetParameter(1,1.024576);
   checkFit1036->SetParError(1,0.02822842);
   checkFit1036->SetParLimits(1,0,0);
   checkFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1036);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.905");
   pt_LaTex = pt->AddText(" 1.02#pm0.0282");
   pt_LaTex = pt->AddText(" 6.93#pm0.631");
   pt_LaTex = pt->AddText(" 6.76#pm0.644");
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
   TLine *line = new TLine(-36,0,-6.763643,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-6.763643,-31.36604,-6.763643,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1037 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1037->SetFillColor(19);
   checkFit1037->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1037->SetLineColor(ci);
   checkFit1037->SetLineWidth(2);
   checkFit1037->SetChisquare(1.810538);
   checkFit1037->SetNDF(2);
   checkFit1037->GetXaxis()->SetLabelFont(42);
   checkFit1037->GetXaxis()->SetTitleOffset(1);
   checkFit1037->GetXaxis()->SetTitleFont(42);
   checkFit1037->GetYaxis()->SetLabelFont(42);
   checkFit1037->GetYaxis()->SetTitleFont(42);
   checkFit1037->SetParameter(0,6.929868);
   checkFit1037->SetParError(0,0.6312066);
   checkFit1037->SetParLimits(0,0,0);
   checkFit1037->SetParameter(1,1.024576);
   checkFit1037->SetParError(1,0.02822842);
   checkFit1037->SetParLimits(1,0,0);
   checkFit1037->Draw("same");
   
   pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("75 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
