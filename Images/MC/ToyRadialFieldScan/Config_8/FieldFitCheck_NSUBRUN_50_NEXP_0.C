void FieldFitCheck_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-71.64877,75,92.11321);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1027[5] = {
   -41.25659,
   -17.23118,
   8.14473,
   39.14079,
   61.72103};
   Double_t Graph0_fex1027[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1027[5] = {
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","Sub-runs 50",100,-60,60);
   Graph_Graph01027->SetMinimum(-55.27257);
   Graph_Graph01027->SetMaximum(75.73701);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   
   TF1 *checkFit1028 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1028->SetFillColor(19);
   checkFit1028->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1028->SetLineColor(ci);
   checkFit1028->SetLineWidth(2);
   checkFit1028->SetChisquare(1.547522);
   checkFit1028->SetNDF(3);
   checkFit1028->GetXaxis()->SetLabelFont(42);
   checkFit1028->GetXaxis()->SetTitleOffset(1);
   checkFit1028->GetXaxis()->SetTitleFont(42);
   checkFit1028->GetYaxis()->SetLabelFont(42);
   checkFit1028->GetYaxis()->SetTitleFont(42);
   checkFit1028->SetParameter(0,10.10376);
   checkFit1028->SetParError(0,1.385699);
   checkFit1028->SetParLimits(0,0,0);
   checkFit1028->SetParameter(1,1.049309);
   checkFit1028->SetParError(1,0.0391935);
   checkFit1028->SetParLimits(1,0,0);
   checkFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1028);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.516");
   pt_LaTex = pt->AddText(" 1.05#pm0.0392");
   pt_LaTex = pt->AddText(" 10.1#pm 1.39");
   pt_LaTex = pt->AddText("#minus9.63#pm 1.37");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-9.628964,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-9.628964,-55.27257,-9.628964,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1029 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1029->SetFillColor(19);
   checkFit1029->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1029->SetLineColor(ci);
   checkFit1029->SetLineWidth(2);
   checkFit1029->SetChisquare(1.547522);
   checkFit1029->SetNDF(3);
   checkFit1029->GetXaxis()->SetLabelFont(42);
   checkFit1029->GetXaxis()->SetTitleOffset(1);
   checkFit1029->GetXaxis()->SetTitleFont(42);
   checkFit1029->GetYaxis()->SetLabelFont(42);
   checkFit1029->GetYaxis()->SetTitleFont(42);
   checkFit1029->SetParameter(0,10.10376);
   checkFit1029->SetParError(0,1.385699);
   checkFit1029->SetParLimits(0,0,0);
   checkFit1029->SetParameter(1,1.049309);
   checkFit1029->SetParError(1,0.0391935);
   checkFit1029->SetParLimits(1,0,0);
   checkFit1029->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 50");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
