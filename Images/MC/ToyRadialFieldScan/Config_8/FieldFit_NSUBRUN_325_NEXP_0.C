void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3525792,75,0.2753873);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1179[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1179[5] = {
   0.1656997,
   0.07495436,
   -0.02812524,
   -0.1290341,
   -0.2428916};
   Double_t Graph0_fex1179[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1179[5] = {
   0.005026548,
   0.005026548,
   0.005026548,
   0.005026548,
   0.005026548};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1179,Graph0_fy1179,Graph0_fex1179,Graph0_fey1179);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01179 = new TH1F("Graph_Graph01179","Sub-runs 325",100,-60,60);
   Graph_Graph01179->SetMinimum(-0.2897826);
   Graph_Graph01179->SetMaximum(0.2125907);
   Graph_Graph01179->SetDirectory(0);
   Graph_Graph01179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01179->SetLineColor(ci);
   Graph_Graph01179->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01179->GetXaxis()->CenterTitle(true);
   Graph_Graph01179->GetXaxis()->SetLabelFont(42);
   Graph_Graph01179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01179->GetXaxis()->SetTitleFont(42);
   Graph_Graph01179->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01179->GetYaxis()->CenterTitle(true);
   Graph_Graph01179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01179->GetYaxis()->SetLabelFont(42);
   Graph_Graph01179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01179->GetYaxis()->SetTitleFont(42);
   Graph_Graph01179->GetZaxis()->SetLabelFont(42);
   Graph_Graph01179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01179);
   
   
   TF1 *mainFit1180 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1180->SetFillColor(19);
   mainFit1180->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1180->SetLineColor(ci);
   mainFit1180->SetLineWidth(2);
   mainFit1180->SetChisquare(5.984191);
   mainFit1180->SetNDF(3);
   mainFit1180->GetXaxis()->SetLabelFont(42);
   mainFit1180->GetXaxis()->SetTitleOffset(1);
   mainFit1180->GetXaxis()->SetTitleFont(42);
   mainFit1180->GetYaxis()->SetLabelFont(42);
   mainFit1180->GetYaxis()->SetTitleFont(42);
   mainFit1180->SetParameter(0,-0.03187937);
   mainFit1180->SetParError(0,0.002247941);
   mainFit1180->SetParLimits(0,0,0);
   mainFit1180->SetParameter(1,-0.004084684);
   mainFit1180->SetParError(1,6.358137e-05);
   mainFit1180->SetParLimits(1,0,0);
   mainFit1180->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1180);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.99");
   pt_LaTex = pt->AddText("#minus0.00408#pm6.36e-05");
   pt_LaTex = pt->AddText("#minus0.0319#pm0.00225");
   pt_LaTex = pt->AddText(" #minus7.8#pm0.564");
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
   TLine *line = new TLine(-60,0,-7.804611,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.804611,-0.2897826,-7.804611,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1181 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1181->SetFillColor(19);
   mainFit1181->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1181->SetLineColor(ci);
   mainFit1181->SetLineWidth(2);
   mainFit1181->SetChisquare(5.984191);
   mainFit1181->SetNDF(3);
   mainFit1181->GetXaxis()->SetLabelFont(42);
   mainFit1181->GetXaxis()->SetTitleOffset(1);
   mainFit1181->GetXaxis()->SetTitleFont(42);
   mainFit1181->GetYaxis()->SetLabelFont(42);
   mainFit1181->GetYaxis()->SetTitleFont(42);
   mainFit1181->SetParameter(0,-0.03187937);
   mainFit1181->SetParError(0,0.002247941);
   mainFit1181->SetParLimits(0,0,0);
   mainFit1181->SetParameter(1,-0.004084684);
   mainFit1181->SetParError(1,6.358137e-05);
   mainFit1181->SetParLimits(1,0,0);
   mainFit1181->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 325");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
