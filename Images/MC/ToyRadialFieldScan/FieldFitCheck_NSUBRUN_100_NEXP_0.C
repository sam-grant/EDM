void FieldFitCheck_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 12:48:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-43.45767,75,79.98025);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1063[6] = {
   0,
   -22.01964,
   -1.244173,
   17.51394,
   38.85309,
   58.54223};
   Double_t Graph0_fex1063[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1063[6] = {
   0,
   0.8650393,
   0.8650393,
   0.8650393,
   0.8650393,
   0.8650393};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","",100,-60,60);
   Graph_Graph01063->SetMinimum(-31.11388);
   Graph_Graph01063->SetMaximum(67.63646);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
   
   TF1 *checkFit1064 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1064->SetFillColor(19);
   checkFit1064->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1064->SetLineColor(ci);
   checkFit1064->SetLineWidth(2);
   checkFit1064->SetChisquare(1.522273);
   checkFit1064->SetNDF(3);
   checkFit1064->GetXaxis()->SetLabelFont(42);
   checkFit1064->GetXaxis()->SetTitleOffset(1);
   checkFit1064->GetXaxis()->SetTitleFont(42);
   checkFit1064->GetYaxis()->SetLabelFont(42);
   checkFit1064->GetYaxis()->SetTitleFont(42);
   checkFit1064->SetParameter(0,8.268037);
   checkFit1064->SetParError(0,0.4103242);
   checkFit1064->SetParLimits(0,0,0);
   checkFit1064->SetParameter(1,1.006105);
   checkFit1064->SetParError(1,0.01367748);
   checkFit1064->SetParLimits(1,0,0);
   checkFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1064);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.507");
   pt_LaTex = pt->AddText("1.01
#pm0.01
");
   pt_LaTex = pt->AddText("8.27
#pm0.4
");
   pt_LaTex = pt->AddText("8.2
#pm0.5
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.217867,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.217867,-31.11388,-8.217867,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1065 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1065->SetFillColor(19);
   checkFit1065->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1065->SetLineColor(ci);
   checkFit1065->SetLineWidth(2);
   checkFit1065->SetChisquare(1.522273);
   checkFit1065->SetNDF(3);
   checkFit1065->GetXaxis()->SetLabelFont(42);
   checkFit1065->GetXaxis()->SetTitleOffset(1);
   checkFit1065->GetXaxis()->SetTitleFont(42);
   checkFit1065->GetYaxis()->SetLabelFont(42);
   checkFit1065->GetYaxis()->SetTitleFont(42);
   checkFit1065->SetParameter(0,8.268037);
   checkFit1065->SetParError(0,0.4103242);
   checkFit1065->SetParLimits(0,0,0);
   checkFit1065->SetParameter(1,1.006105);
   checkFit1065->SetParError(1,0.01367748);
   checkFit1065->SetParLimits(1,0,0);
   checkFit1065->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
