void FieldFitCheck_NSUBRUN_325_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-107.3854,75,397.2921);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1207[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1207[6] = {
   312.7023,
   -22.79558,
   -1.714785,
   17.43609,
   38.6506,
   57.86911};
   Double_t Graph0_fex1207[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1207[6] = {
   0.4769094,
   0.4769094,
   0.4769094,
   0.4769094,
   0.4769094,
   0.4769094};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1207,Graph0_fy1207,Graph0_fex1207,Graph0_fey1207);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01207 = new TH1F("Graph_Graph01207","",100,-60,60);
   Graph_Graph01207->SetMinimum(-56.91766);
   Graph_Graph01207->SetMaximum(346.8244);
   Graph_Graph01207->SetDirectory(0);
   Graph_Graph01207->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01207->SetLineColor(ci);
   Graph_Graph01207->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01207->GetXaxis()->CenterTitle(true);
   Graph_Graph01207->GetXaxis()->SetLabelFont(42);
   Graph_Graph01207->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01207->GetXaxis()->SetTitleFont(42);
   Graph_Graph01207->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01207->GetYaxis()->CenterTitle(true);
   Graph_Graph01207->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01207->GetYaxis()->SetLabelFont(42);
   Graph_Graph01207->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01207->GetYaxis()->SetTitleFont(42);
   Graph_Graph01207->GetZaxis()->SetLabelFont(42);
   Graph_Graph01207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01207);
   
   
   TF1 *checkFit1208 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1208->SetFillColor(19);
   checkFit1208->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1208->SetLineColor(ci);
   checkFit1208->SetLineWidth(2);
   checkFit1208->SetChisquare(264338.5);
   checkFit1208->SetNDF(4);
   checkFit1208->GetXaxis()->SetLabelFont(42);
   checkFit1208->GetXaxis()->SetTitleOffset(1);
   checkFit1208->GetXaxis()->SetTitleFont(42);
   checkFit1208->GetYaxis()->SetLabelFont(42);
   checkFit1208->GetYaxis()->SetTitleFont(42);
   checkFit1208->SetParameter(0,67.02462);
   checkFit1208->SetParError(0,0.1946974);
   checkFit1208->SetParLimits(0,0,0);
   checkFit1208->SetParameter(1,-1.529538);
   checkFit1208->SetParError(1,0.005700157);
   checkFit1208->SetParLimits(1,0,0);
   checkFit1208->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1208);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("6.61e+04");
   pt_LaTex = pt->AddText("-1.53
#pm0.006
");
   pt_LaTex = pt->AddText("67
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
   TLine *line = new TLine(-60,0,43.82018,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(43.82018,-56.91766,43.82018,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1209 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1209->SetFillColor(19);
   checkFit1209->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1209->SetLineColor(ci);
   checkFit1209->SetLineWidth(2);
   checkFit1209->SetChisquare(264338.5);
   checkFit1209->SetNDF(4);
   checkFit1209->GetXaxis()->SetLabelFont(42);
   checkFit1209->GetXaxis()->SetTitleOffset(1);
   checkFit1209->GetXaxis()->SetTitleFont(42);
   checkFit1209->GetYaxis()->SetLabelFont(42);
   checkFit1209->GetYaxis()->SetTitleFont(42);
   checkFit1209->SetParameter(0,67.02462);
   checkFit1209->SetParError(0,0.1946974);
   checkFit1209->SetParLimits(0,0,0);
   checkFit1209->SetParameter(1,-1.529538);
   checkFit1209->SetParError(1,0.005700157);
   checkFit1209->SetParLimits(1,0,0);
   checkFit1209->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
