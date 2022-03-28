void S0S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceUncorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 14:31:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8481,-1.596116e-06,3375.839,6.449484e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1209[11] = {
   451.8623,
   653.3101,
   880.3185,
   1123.1,
   1371.081,
   1620.147,
   1866.984,
   2115.387,
   2362.985,
   2613.712,
   2788.104};
   Double_t Graph0_fy1209[11] = {
   1.261268e-08,
   4.955521e-08,
   2.897456e-08,
   3.557249e-08,
   6.502677e-08,
   9.43126e-08,
   1.360607e-07,
   2.22757e-07,
   2.628498e-07,
   6.473603e-07,
   2.595972e-06};
   Double_t Graph0_fex1209[11] = {
   0.06192587,
   0.05229228,
   0.03786879,
   0.03698976,
   0.03950195,
   0.04367656,
   0.05102979,
   0.0635319,
   0.08237325,
   0.1006897,
   0.1228771};
   Double_t Graph0_fey1209[11] = {
   2.677949e-07,
   1.780554e-08,
   6.062895e-09,
   5.54816e-09,
   6.777366e-09,
   9.157638e-09,
   1.452743e-08,
   2.744361e-08,
   5.811095e-08,
   1.102238e-07,
   2.512579e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1209,Graph0_fy1209,Graph0_fex1209,Graph0_fey1209);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01209 = new TH1F("Graph_Graph01209","S0S12S18_",100,218.1577,3021.87);
   Graph_Graph01209->SetMinimum(-7.915555e-07);
   Graph_Graph01209->SetMaximum(5.644924e-06);
   Graph_Graph01209->SetDirectory(0);
   Graph_Graph01209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01209->SetLineColor(ci);
   Graph_Graph01209->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01209->GetXaxis()->SetRange(0,100);
   Graph_Graph01209->GetXaxis()->CenterTitle(true);
   Graph_Graph01209->GetXaxis()->SetLabelFont(42);
   Graph_Graph01209->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01209->GetXaxis()->SetTitleFont(42);
   Graph_Graph01209->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01209->GetYaxis()->CenterTitle(true);
   Graph_Graph01209->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01209->GetYaxis()->SetLabelFont(42);
   Graph_Graph01209->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01209->GetYaxis()->SetTitleFont(42);
   Graph_Graph01209->GetZaxis()->SetLabelFont(42);
   Graph_Graph01209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01209);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
