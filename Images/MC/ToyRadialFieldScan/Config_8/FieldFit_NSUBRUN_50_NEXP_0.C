void FieldFit_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3791141,75,0.2948878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1025[5] = {
   0.1698014,
   0.07091906,
   -0.0335216,
   -0.1610934,
   -0.2540277};
   Double_t Graph0_fex1025[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1025[5] = {
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527,
   0.0127527};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","Sub-runs 50",100,-60,60);
   Graph_Graph01025->SetMinimum(-0.3117139);
   Graph_Graph01025->SetMaximum(0.2274876);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
   
   TF1 *mainFit1026 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1026->SetFillColor(19);
   mainFit1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1026->SetLineColor(ci);
   mainFit1026->SetLineWidth(2);
   mainFit1026->SetChisquare(1.547522);
   mainFit1026->SetNDF(3);
   mainFit1026->GetXaxis()->SetLabelFont(42);
   mainFit1026->GetXaxis()->SetTitleOffset(1);
   mainFit1026->GetXaxis()->SetTitleFont(42);
   mainFit1026->GetYaxis()->SetLabelFont(42);
   mainFit1026->GetYaxis()->SetTitleFont(42);
   mainFit1026->SetParameter(0,-0.04158444);
   mainFit1026->SetParError(0,0.00570318);
   mainFit1026->SetParLimits(0,0,0);
   mainFit1026->SetParameter(1,-0.004318683);
   mainFit1026->SetParError(1,0.0001613103);
   mainFit1026->SetParLimits(1,0,0);
   mainFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1026);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.516");
   pt_LaTex = pt->AddText("#minus0.00432#pm0.000161");
   pt_LaTex = pt->AddText("#minus0.0416#pm0.0057");
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
   line = new TLine(-9.628964,-0.3117139,-9.628964,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1027 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1027->SetFillColor(19);
   mainFit1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1027->SetLineColor(ci);
   mainFit1027->SetLineWidth(2);
   mainFit1027->SetChisquare(1.547522);
   mainFit1027->SetNDF(3);
   mainFit1027->GetXaxis()->SetLabelFont(42);
   mainFit1027->GetXaxis()->SetTitleOffset(1);
   mainFit1027->GetXaxis()->SetTitleFont(42);
   mainFit1027->GetYaxis()->SetLabelFont(42);
   mainFit1027->GetYaxis()->SetTitleFont(42);
   mainFit1027->SetParameter(0,-0.04158444);
   mainFit1027->SetParError(0,0.00570318);
   mainFit1027->SetParLimits(0,0,0);
   mainFit1027->SetParameter(1,-0.004318683);
   mainFit1027->SetParError(1,0.0001613103);
   mainFit1027->SetParLimits(1,0,0);
   mainFit1027->Draw("same");
   
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
