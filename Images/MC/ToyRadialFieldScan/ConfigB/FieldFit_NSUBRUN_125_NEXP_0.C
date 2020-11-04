void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.4108063,75,0.330915);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1077[6] = {
   0.2026267,
   0.1053384,
   0.01410701,
   -0.08523873,
   -0.1854264,
   -0.2825179};
   Double_t Graph0_fex1077[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1077[6] = {
   0.004668131,
   0.004668147,
   0.004668173,
   0.004668135,
   0.00466814,
   0.004668142};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","Sub-runs 125",100,-60,60);
   Graph_Graph01077->SetMinimum(-0.3366341);
   Graph_Graph01077->SetMaximum(0.2567429);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
   
   TF1 *mainFit1078 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1078->SetFillColor(19);
   mainFit1078->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1078->SetLineColor(ci);
   mainFit1078->SetLineWidth(2);
   mainFit1078->SetChisquare(1.324959);
   mainFit1078->SetNDF(4);
   mainFit1078->GetXaxis()->SetLabelFont(42);
   mainFit1078->GetXaxis()->SetTitleOffset(1);
   mainFit1078->GetXaxis()->SetTitleFont(42);
   mainFit1078->GetYaxis()->SetLabelFont(42);
   mainFit1078->GetYaxis()->SetTitleFont(42);
   mainFit1078->SetParameter(0,-0.03851851);
   mainFit1078->SetParError(0,0.001905762);
   mainFit1078->SetParLimits(0,0,0);
   mainFit1078->SetParameter(1,-0.004853376);
   mainFit1078->SetParError(1,5.579493e-05);
   mainFit1078->SetParLimits(1,0,0);
   mainFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1078);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.331");
   pt_LaTex = pt->AddText("#minus0.00485#pm5.58e-05");
   pt_LaTex = pt->AddText("#minus0.0385#pm0.00191");
   pt_LaTex = pt->AddText("#minus7.94#pm0.403");
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
   TLine *line = new TLine(-60,0,-7.936436,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.936436,-0.3366341,-7.936436,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1079 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1079->SetFillColor(19);
   mainFit1079->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1079->SetLineColor(ci);
   mainFit1079->SetLineWidth(2);
   mainFit1079->SetChisquare(1.324959);
   mainFit1079->SetNDF(4);
   mainFit1079->GetXaxis()->SetLabelFont(42);
   mainFit1079->GetXaxis()->SetTitleOffset(1);
   mainFit1079->GetXaxis()->SetTitleFont(42);
   mainFit1079->GetYaxis()->SetLabelFont(42);
   mainFit1079->GetYaxis()->SetTitleFont(42);
   mainFit1079->SetParameter(0,-0.03851851);
   mainFit1079->SetParError(0,0.001905762);
   mainFit1079->SetParLimits(0,0,0);
   mainFit1079->SetParameter(1,-0.004853376);
   mainFit1079->SetParError(1,5.579493e-05);
   mainFit1079->SetParLimits(1,0,0);
   mainFit1079->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 125");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
