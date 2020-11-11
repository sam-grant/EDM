void FieldFitCheck_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 10 15:16:21 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.534,75,83.90304);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1127[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1127[6] = {
   -41.72343,
   -21.76491,
   -1.522583,
   18.50865,
   38.41248,
   58.09247};
   Double_t Graph0_fex1127[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1127[6] = {
   0.5710622,
   0.5710622,
   0.5710622,
   0.5710622,
   0.5710622,
   0.5710622};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1127,Graph0_fy1127,Graph0_fex1127,Graph0_fey1127);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01127 = new TH1F("Graph_Graph01127","200 sub-runs",100,-60,60);
   Graph_Graph01127->SetMinimum(-52.3903);
   Graph_Graph01127->SetMaximum(68.75933);
   Graph_Graph01127->SetDirectory(0);
   Graph_Graph01127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01127->SetLineColor(ci);
   Graph_Graph01127->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01127->GetXaxis()->CenterTitle(true);
   Graph_Graph01127->GetXaxis()->SetLabelFont(42);
   Graph_Graph01127->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01127->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01127->GetXaxis()->SetTitleFont(42);
   Graph_Graph01127->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01127->GetYaxis()->CenterTitle(true);
   Graph_Graph01127->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01127->GetYaxis()->SetLabelFont(42);
   Graph_Graph01127->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01127->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01127->GetYaxis()->SetTitleFont(42);
   Graph_Graph01127->GetZaxis()->SetLabelFont(42);
   Graph_Graph01127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01127);
   
   
   TF1 *checkFit1128 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1128->SetFillColor(19);
   checkFit1128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1128->SetLineColor(ci);
   checkFit1128->SetLineWidth(2);
   checkFit1128->SetChisquare(0.3889005);
   checkFit1128->SetNDF(4);
   checkFit1128->GetXaxis()->SetLabelFont(42);
   checkFit1128->GetXaxis()->SetTitleOffset(1);
   checkFit1128->GetXaxis()->SetTitleFont(42);
   checkFit1128->GetYaxis()->SetLabelFont(42);
   checkFit1128->GetYaxis()->SetTitleFont(42);
   checkFit1128->SetParameter(0,8.333779);
   checkFit1128->SetParError(0,0.2331351);
   checkFit1128->SetParLimits(0,0,0);
   checkFit1128->SetParameter(1,0.9994898);
   checkFit1128->SetParError(1,0.006825499);
   checkFit1128->SetParLimits(1,0,0);
   checkFit1128->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1128);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0972");
   pt_LaTex = pt->AddText("0.999#pm0.00683");
   pt_LaTex = pt->AddText(" 8.33#pm0.233");
   pt_LaTex = pt->AddText(" 8.34#pm 0.24");
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
   TLine *line = new TLine(-60,0,-8.338033,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.338033,-52.3903,-8.338033,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1129 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1129->SetFillColor(19);
   checkFit1129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1129->SetLineColor(ci);
   checkFit1129->SetLineWidth(2);
   checkFit1129->SetChisquare(0.3889005);
   checkFit1129->SetNDF(4);
   checkFit1129->GetXaxis()->SetLabelFont(42);
   checkFit1129->GetXaxis()->SetTitleOffset(1);
   checkFit1129->GetXaxis()->SetTitleFont(42);
   checkFit1129->GetYaxis()->SetLabelFont(42);
   checkFit1129->GetYaxis()->SetTitleFont(42);
   checkFit1129->SetParameter(0,8.333779);
   checkFit1129->SetParError(0,0.2331351);
   checkFit1129->SetParLimits(0,0,0);
   checkFit1129->SetParameter(1,0.9994898);
   checkFit1129->SetParError(1,0.006825499);
   checkFit1129->SetParLimits(1,0,0);
   checkFit1129->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("200 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
