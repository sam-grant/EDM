void FieldFitCheck_NSUBRUN_225_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-106.0522,75,396.9516);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1143[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1143[6] = {
   312.5438,
   -21.6444,
   -1.484639,
   17.98972,
   38.89805,
   57.66197};
   Double_t Graph0_fex1143[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1143[6] = {
   0.5738162,
   0.5738162,
   0.5738162,
   0.5738162,
   0.5738162,
   0.5738162};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1143,Graph0_fy1143,Graph0_fex1143,Graph0_fey1143);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01143 = new TH1F("Graph_Graph01143","",100,-60,60);
   Graph_Graph01143->SetMinimum(-55.75181);
   Graph_Graph01143->SetMaximum(346.6512);
   Graph_Graph01143->SetDirectory(0);
   Graph_Graph01143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01143->SetLineColor(ci);
   Graph_Graph01143->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01143->GetXaxis()->CenterTitle(true);
   Graph_Graph01143->GetXaxis()->SetLabelFont(42);
   Graph_Graph01143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01143->GetXaxis()->SetTitleFont(42);
   Graph_Graph01143->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01143->GetYaxis()->CenterTitle(true);
   Graph_Graph01143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01143->GetYaxis()->SetLabelFont(42);
   Graph_Graph01143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01143->GetYaxis()->SetTitleFont(42);
   Graph_Graph01143->GetZaxis()->SetLabelFont(42);
   Graph_Graph01143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01143);
   
   
   TF1 *checkFit1144 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1144->SetFillColor(19);
   checkFit1144->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1144->SetLineColor(ci);
   checkFit1144->SetLineWidth(2);
   checkFit1144->SetChisquare(181194.6);
   checkFit1144->SetNDF(4);
   checkFit1144->GetXaxis()->SetLabelFont(42);
   checkFit1144->GetXaxis()->SetTitleOffset(1);
   checkFit1144->GetXaxis()->SetTitleFont(42);
   checkFit1144->GetYaxis()->SetLabelFont(42);
   checkFit1144->GetYaxis()->SetTitleFont(42);
   checkFit1144->SetParameter(0,67.32742);
   checkFit1144->SetParError(0,0.2342595);
   checkFit1144->SetParLimits(0,0,0);
   checkFit1144->SetParameter(1,-1.533297);
   checkFit1144->SetParError(1,0.006858415);
   checkFit1144->SetParLimits(1,0,0);
   checkFit1144->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1144);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("4.53e+04");
   pt_LaTex = pt->AddText("-1.53
#pm0.007
");
   pt_LaTex = pt->AddText("67.3
#pm0.2
");
   pt_LaTex = pt->AddText("-44
#pm0.2
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
   TLine *line = new TLine(-60,0,43.91024,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(43.91024,-55.75181,43.91024,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1145 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1145->SetFillColor(19);
   checkFit1145->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1145->SetLineColor(ci);
   checkFit1145->SetLineWidth(2);
   checkFit1145->SetChisquare(181194.6);
   checkFit1145->SetNDF(4);
   checkFit1145->GetXaxis()->SetLabelFont(42);
   checkFit1145->GetXaxis()->SetTitleOffset(1);
   checkFit1145->GetXaxis()->SetTitleFont(42);
   checkFit1145->GetYaxis()->SetLabelFont(42);
   checkFit1145->GetYaxis()->SetTitleFont(42);
   checkFit1145->SetParameter(0,67.32742);
   checkFit1145->SetParError(0,0.2342595);
   checkFit1145->SetParLimits(0,0,0);
   checkFit1145->SetParameter(1,-1.533297);
   checkFit1145->SetParError(1,0.006858415);
   checkFit1145->SetParLimits(1,0,0);
   checkFit1145->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
