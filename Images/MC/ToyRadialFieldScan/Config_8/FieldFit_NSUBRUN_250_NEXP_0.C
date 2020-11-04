void FieldFit_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:58 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3535532,75,0.2955084);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1137[5] = {
   0.1815991,
   0.06670977,
   -0.04561111,
   -0.1347746,
   -0.2396439};
   Double_t Graph0_fex1137[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1137[5] = {
   0.005732347,
   0.005732347,
   0.005732347,
   0.005732347,
   0.005732347};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 250");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","Sub-runs 250",100,-60,60);
   Graph_Graph01137->SetMinimum(-0.288647);
   Graph_Graph01137->SetMaximum(0.2306022);
   Graph_Graph01137->SetDirectory(0);
   Graph_Graph01137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01137->SetLineColor(ci);
   Graph_Graph01137->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01137->GetXaxis()->CenterTitle(true);
   Graph_Graph01137->GetXaxis()->SetLabelFont(42);
   Graph_Graph01137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01137->GetXaxis()->SetTitleFont(42);
   Graph_Graph01137->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01137->GetYaxis()->CenterTitle(true);
   Graph_Graph01137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01137->GetYaxis()->SetLabelFont(42);
   Graph_Graph01137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01137->GetYaxis()->SetTitleFont(42);
   Graph_Graph01137->GetZaxis()->SetLabelFont(42);
   Graph_Graph01137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01137);
   
   
   TF1 *mainFit1138 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1138->SetFillColor(19);
   mainFit1138->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1138->SetLineColor(ci);
   mainFit1138->SetLineWidth(2);
   mainFit1138->SetChisquare(6.609176);
   mainFit1138->SetNDF(3);
   mainFit1138->GetXaxis()->SetLabelFont(42);
   mainFit1138->GetXaxis()->SetTitleOffset(1);
   mainFit1138->GetXaxis()->SetTitleFont(42);
   mainFit1138->GetYaxis()->SetLabelFont(42);
   mainFit1138->GetYaxis()->SetTitleFont(42);
   mainFit1138->SetParameter(0,-0.03434413);
   mainFit1138->SetParError(0,0.002563583);
   mainFit1138->SetParLimits(0,0,0);
   mainFit1138->SetParameter(1,-0.004175882);
   mainFit1138->SetParError(1,7.250909e-05);
   mainFit1138->SetParLimits(1,0,0);
   mainFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1138);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  2.2");
   pt_LaTex = pt->AddText("#minus0.00418#pm7.25e-05");
   pt_LaTex = pt->AddText("#minus0.0343#pm0.00256");
   pt_LaTex = pt->AddText("#minus8.22#pm 0.63");
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
   TLine *line = new TLine(-60,0,-8.224403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.224403,-0.288647,-8.224403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1139 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1139->SetFillColor(19);
   mainFit1139->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1139->SetLineColor(ci);
   mainFit1139->SetLineWidth(2);
   mainFit1139->SetChisquare(6.609176);
   mainFit1139->SetNDF(3);
   mainFit1139->GetXaxis()->SetLabelFont(42);
   mainFit1139->GetXaxis()->SetTitleOffset(1);
   mainFit1139->GetXaxis()->SetTitleFont(42);
   mainFit1139->GetYaxis()->SetLabelFont(42);
   mainFit1139->GetYaxis()->SetTitleFont(42);
   mainFit1139->SetParameter(0,-0.03434413);
   mainFit1139->SetParError(0,0.002563583);
   mainFit1139->SetParLimits(0,0,0);
   mainFit1139->SetParameter(1,-0.004175882);
   mainFit1139->SetParError(1,7.250909e-05);
   mainFit1139->SetParLimits(1,0,0);
   mainFit1139->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 250");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
