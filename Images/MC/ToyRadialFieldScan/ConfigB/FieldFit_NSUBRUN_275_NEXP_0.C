void FieldFit_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3997671,75,0.3268537);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1173[6] = {
   0.2026078,
   0.1063014,
   0.01029519,
   -0.08478333,
   -0.1764859,
   -0.2755212};
   Double_t Graph0_fex1173[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1173[6] = {
   0.003142437,
   0.003142433,
   0.003142441,
   0.003142437,
   0.003142435,
   0.003142442};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 275");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","Sub-runs 275",100,-60,60);
   Graph_Graph01173->SetMinimum(-0.327105);
   Graph_Graph01173->SetMaximum(0.2541916);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
   
   TF1 *mainFit1174 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1174->SetFillColor(19);
   mainFit1174->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1174->SetLineColor(ci);
   mainFit1174->SetLineWidth(2);
   mainFit1174->SetChisquare(1.104668);
   mainFit1174->SetNDF(4);
   mainFit1174->GetXaxis()->SetLabelFont(42);
   mainFit1174->GetXaxis()->SetTitleOffset(1);
   mainFit1174->GetXaxis()->SetTitleFont(42);
   mainFit1174->GetYaxis()->SetLabelFont(42);
   mainFit1174->GetYaxis()->SetTitleFont(42);
   mainFit1174->SetParameter(0,-0.03626416);
   mainFit1174->SetParError(0,0.001282895);
   mainFit1174->SetParLimits(0,0,0);
   mainFit1174->SetParameter(1,-0.004762978);
   mainFit1174->SetParError(1,3.755932e-05);
   mainFit1174->SetParLimits(1,0,0);
   mainFit1174->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1174);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.276");
   pt_LaTex = pt->AddText("#minus0.00476#pm3.76e-05");
   pt_LaTex = pt->AddText("#minus0.0363#pm0.00128");
   pt_LaTex = pt->AddText("#minus7.61#pm0.276");
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
   TLine *line = new TLine(-60,0,-7.613759,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.613759,-0.327105,-7.613759,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1175 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1175->SetFillColor(19);
   mainFit1175->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1175->SetLineColor(ci);
   mainFit1175->SetLineWidth(2);
   mainFit1175->SetChisquare(1.104668);
   mainFit1175->SetNDF(4);
   mainFit1175->GetXaxis()->SetLabelFont(42);
   mainFit1175->GetXaxis()->SetTitleOffset(1);
   mainFit1175->GetXaxis()->SetTitleFont(42);
   mainFit1175->GetYaxis()->SetLabelFont(42);
   mainFit1175->GetYaxis()->SetTitleFont(42);
   mainFit1175->SetParameter(0,-0.03626416);
   mainFit1175->SetParError(0,0.001282895);
   mainFit1175->SetParLimits(0,0,0);
   mainFit1175->SetParameter(1,-0.004762978);
   mainFit1175->SetParError(1,3.755932e-05);
   mainFit1175->SetParLimits(1,0,0);
   mainFit1175->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 275");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
