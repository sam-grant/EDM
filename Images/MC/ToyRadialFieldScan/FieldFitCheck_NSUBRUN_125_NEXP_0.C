void FieldFitCheck_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:23 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-44.12295,75,77.76939);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1079[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1079[6] = {
   0,
   -23.03535,
   -1.814034,
   17.08831,
   37.52809,
   56.68179};
   Double_t Graph0_fex1079[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1079[6] = {
   0,
   0.7722076,
   0.7722076,
   0.7722076,
   0.7722076,
   0.7722076};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1079,Graph0_fy1079,Graph0_fex1079,Graph0_fey1079);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01079 = new TH1F("Graph_Graph01079","",100,-60,60);
   Graph_Graph01079->SetMinimum(-31.93371);
   Graph_Graph01079->SetMaximum(65.58015);
   Graph_Graph01079->SetDirectory(0);
   Graph_Graph01079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01079->SetLineColor(ci);
   Graph_Graph01079->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01079->GetXaxis()->CenterTitle(true);
   Graph_Graph01079->GetXaxis()->SetLabelFont(42);
   Graph_Graph01079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01079->GetXaxis()->SetTitleFont(42);
   Graph_Graph01079->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01079->GetYaxis()->CenterTitle(true);
   Graph_Graph01079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01079->GetYaxis()->SetLabelFont(42);
   Graph_Graph01079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01079->GetYaxis()->SetTitleFont(42);
   Graph_Graph01079->GetZaxis()->SetLabelFont(42);
   Graph_Graph01079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01079);
   
   
   TF1 *checkFit1080 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1080->SetFillColor(19);
   checkFit1080->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1080->SetLineColor(ci);
   checkFit1080->SetLineWidth(2);
   checkFit1080->SetChisquare(2.056287);
   checkFit1080->SetNDF(3);
   checkFit1080->GetXaxis()->SetLabelFont(42);
   checkFit1080->GetXaxis()->SetTitleOffset(1);
   checkFit1080->GetXaxis()->SetTitleFont(42);
   checkFit1080->GetYaxis()->SetLabelFont(42);
   checkFit1080->GetYaxis()->SetTitleFont(42);
   checkFit1080->SetParameter(0,7.350941);
   checkFit1080->SetParError(0,0.3662903);
   checkFit1080->SetParLimits(0,0,0);
   checkFit1080->SetParameter(1,0.993882);
   checkFit1080->SetParError(1,0.01220968);
   checkFit1080->SetParLimits(1,0,0);
   checkFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1080);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.99
#pm0.01
");
   pt_LaTex = pt->AddText("7.4
#pm0.4
");
   pt_LaTex = pt->AddText("7.4
#pm0.4
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-7.396191,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.396191,-31.93371,-7.396191,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1081 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1081->SetFillColor(19);
   checkFit1081->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1081->SetLineColor(ci);
   checkFit1081->SetLineWidth(2);
   checkFit1081->SetChisquare(2.056287);
   checkFit1081->SetNDF(3);
   checkFit1081->GetXaxis()->SetLabelFont(42);
   checkFit1081->GetXaxis()->SetTitleOffset(1);
   checkFit1081->GetXaxis()->SetTitleFont(42);
   checkFit1081->GetYaxis()->SetLabelFont(42);
   checkFit1081->GetYaxis()->SetTitleFont(42);
   checkFit1081->SetParameter(0,7.350941);
   checkFit1081->SetParError(0,0.3662903);
   checkFit1081->SetParLimits(0,0,0);
   checkFit1081->SetParameter(1,0.993882);
   checkFit1081->SetParError(1,0.01220968);
   checkFit1081->SetParLimits(1,0,0);
   checkFit1081->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
