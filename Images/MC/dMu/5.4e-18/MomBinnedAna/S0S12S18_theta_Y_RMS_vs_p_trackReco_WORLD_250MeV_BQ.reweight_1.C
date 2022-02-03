void S0S12S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:52:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3996,-4.878044,3407.527,56.78603);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1211[11] = {
   451.8592,
   653.3031,
   880.3064,
   1123.077,
   1371.079,
   1620.197,
   1866.983,
   2115.419,
   2362.996,
   2613.822,
   2788.198};
   Double_t Graph0_fy1211[11] = {
   28.62498,
   23.67592,
   19.47214,
   16.47925,
   14.1433,
   12.17315,
   10.44427,
   8.827089,
   7.285843,
   5.733027,
   4.547105};
   Double_t Graph0_fex1211[11] = {
   0.07208649,
   0.0609111,
   0.04412965,
   0.04310089,
   0.04602564,
   0.05089827,
   0.05933135,
   0.07372534,
   0.09524054,
   0.1166558,
   0.1421259};
   Double_t Graph0_fey1211[11] = {
   0.04420173,
   0.0148064,
   0.008494232,
   0.006978358,
   0.00639747,
   0.006098748,
   0.006109164,
   0.006411305,
   0.006850114,
   0.006785821,
   0.01541808};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1211,Graph0_fy1211,Graph0_fex1211,Graph0_fey1211);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01211 = new TH1F("Graph_Graph01211","S0S12S18_",100,218.1318,3021.996);
   Graph_Graph01211->SetMinimum(1.288364);
   Graph_Graph01211->SetMaximum(50.61962);
   Graph_Graph01211->SetDirectory(0);
   Graph_Graph01211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01211->SetLineColor(ci);
   Graph_Graph01211->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01211->GetXaxis()->SetRange(0,101);
   Graph_Graph01211->GetXaxis()->CenterTitle(true);
   Graph_Graph01211->GetXaxis()->SetLabelFont(42);
   Graph_Graph01211->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01211->GetXaxis()->SetTitleFont(42);
   Graph_Graph01211->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01211->GetYaxis()->CenterTitle(true);
   Graph_Graph01211->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01211->GetYaxis()->SetLabelFont(42);
   Graph_Graph01211->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01211->GetYaxis()->SetTitleFont(42);
   Graph_Graph01211->GetZaxis()->SetLabelFont(42);
   Graph_Graph01211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01211);
   
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
