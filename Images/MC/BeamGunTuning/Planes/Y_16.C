void Y_16()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_16__35 = new TH1F("Y_16__35","Plane 16",100,-100,100);
   Y_16__35->SetBinContent(40,1);
   Y_16__35->SetBinContent(41,9);
   Y_16__35->SetBinContent(42,22);
   Y_16__35->SetBinContent(43,26);
   Y_16__35->SetBinContent(44,21);
   Y_16__35->SetBinContent(45,17);
   Y_16__35->SetBinContent(46,14);
   Y_16__35->SetBinContent(47,12);
   Y_16__35->SetBinContent(48,12);
   Y_16__35->SetBinContent(49,45);
   Y_16__35->SetBinContent(50,74);
   Y_16__35->SetBinContent(51,38);
   Y_16__35->SetBinContent(52,12);
   Y_16__35->SetBinContent(53,9);
   Y_16__35->SetBinContent(54,16);
   Y_16__35->SetBinContent(55,16);
   Y_16__35->SetBinContent(56,15);
   Y_16__35->SetBinContent(57,20);
   Y_16__35->SetBinContent(58,30);
   Y_16__35->SetBinContent(59,21);
   Y_16__35->SetBinContent(63,1);
   Y_16__35->SetBinContent(64,1);
   Y_16__35->SetBinContent(65,1);
   Y_16__35->SetBinContent(67,1);
   Y_16__35->SetBinContent(69,1);
   Y_16__35->SetBinContent(71,1);
   Y_16__35->SetBinContent(73,1);
   Y_16__35->SetEntries(437);
   Y_16__35->SetLineWidth(3);
   Y_16__35->GetXaxis()->SetTitle("Y [mm]");
   Y_16__35->GetXaxis()->CenterTitle(true);
   Y_16__35->GetXaxis()->SetLabelFont(42);
   Y_16__35->GetXaxis()->SetTitleSize(0.04);
   Y_16__35->GetXaxis()->SetTitleOffset(1.1);
   Y_16__35->GetXaxis()->SetTitleFont(42);
   Y_16__35->GetYaxis()->SetTitle("Ghost tracks");
   Y_16__35->GetYaxis()->CenterTitle(true);
   Y_16__35->GetYaxis()->SetNdivisions(4000510);
   Y_16__35->GetYaxis()->SetLabelFont(42);
   Y_16__35->GetYaxis()->SetTitleSize(0.04);
   Y_16__35->GetYaxis()->SetTitleOffset(1.1);
   Y_16__35->GetYaxis()->SetTitleFont(42);
   Y_16__35->GetZaxis()->SetLabelFont(42);
   Y_16__35->GetZaxis()->SetTitleOffset(1);
   Y_16__35->GetZaxis()->SetTitleFont(42);
   Y_16__35->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
